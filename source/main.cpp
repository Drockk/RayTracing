#include <iostream>

int main() {
    //Image resolution
    constexpr auto imageWidth{ 256 };
    constexpr auto imageHeight{ 256 };

    //Render
    std::cout << "P3\n" << imageWidth << ' ' << imageHeight << "\n255\n";

    for (auto j = imageHeight - 1; j >= 0; --j) {
        for (auto i = 0; i < imageWidth; ++i) {
            const auto r = static_cast<double>(i) / (imageWidth - 1);
            const auto g = static_cast<double>(j) / (imageHeight - 1);
            const auto b = 0.25;

            const auto ir = static_cast<int32_t>(255.99 * r);
            const auto ig = static_cast<int32_t>(255.99 * g);
            const auto ib = static_cast<int32_t>(255.99 * b);

            std::cout << ir << ' ' << ig << ' ' << ib << '\n';
        }
    }

    return 0;
}