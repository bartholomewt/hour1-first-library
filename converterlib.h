float cm_to_in(void)
{
    float cm = get_float("Number of centimeters:");
    float in = cm / 2.54;
    printf("\nThe number of inches is %.2f\n", in);
    return in;
}

float in_to_kilometers(void)
{
    float in = get_float("Number of inches:");
    float kilometers = (in * .0000254);
    printf("\nThe number of kilometers is %.7f\n", kilometers);
    return kilometers;
}
