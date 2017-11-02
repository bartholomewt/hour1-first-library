float cm_to_in(void)
{
    float cm = get_float("Number of centimeters:");
    float in = cm / 2.54;
    printf("\nThe number of inches is %.2f\n", in);
    return in;
}

float ft_to_m(void)
{
    float ft = get_float("Number of Feet");
    float m = ft*3.28;
    printf("The number of meters is %.2f\n", m);
    return m;
}
