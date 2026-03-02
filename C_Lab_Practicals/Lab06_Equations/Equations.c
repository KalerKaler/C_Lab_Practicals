#include <stdio.h>
#include <math.h>

int main() {
    double initial_velocity, acceleration, time_duration;
    double variable_b, variable_c, variable_p;

    printf("Enter initial velocity (u), acceleration (a), and time (t): ");
    scanf("%lf %lf %lf", &initial_velocity, &acceleration, &time_duration);
    printf("Enter values for b, c, and p: ");
    scanf("%lf %lf %lf", &variable_b, &variable_c, &variable_p);

    double final_velocity = initial_velocity + (acceleration * time_duration);
    double displacement = (initial_velocity * time_duration) + (0.5 * acceleration * pow(time_duration, 2));
    double result_t = (2 * acceleration) + sqrt(variable_b) + (9 * variable_c);
    double hypotenuse = sqrt(pow(variable_b, 2) + pow(variable_p, 2));

    printf("\nResults:\n");
    printf("(i)   Final Velocity (V) = %.2f\n", final_velocity);
    printf("(ii)  Displacement (S)   = %.2f\n", displacement);
    printf("(iii) Result (T)         = %.2f\n", result_t);
    printf("(iv)  Hypotenuse (H)     = %.2f\n", hypotenuse);

    return 0;
}