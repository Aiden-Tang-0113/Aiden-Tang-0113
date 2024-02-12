#include <iostream>
#include <vector>
#include <algorithm>

int max_normal_blood_pressure_duration( std::vector<std::vector<int>>& pressures) {
    int max_duration = 0;    int current_duration = 0;

    for (const auto& pressure : pressures) {
        int systolic = pressure[0];
        int diastolic = pressure[1];

        if (90 <= systolic && systolic <= 140 && 60 <= diastolic && diastolic <= 90) {
            current_duration++;
        } else {
            max_duration = std::max(max_duration, current_duration);
            current_duration = 0;
        }
    }

    return std::max(max_duration, current_duration);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> pressures;

    for (int i = 0; i < n; i++) {
        int systolic, diastolic;
        std::cin >> systolic >> diastolic;
        pressures.push_back({systolic, diastolic});
    }

    int result = max_normal_blood_pressure_duration(pressures);
    std::cout << result << std::endl;

    return 0;
}