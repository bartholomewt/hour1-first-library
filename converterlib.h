float cm_to_in(void)
{
    float cm = get_float("Number of centimeters:");
    float in = cm / 2.54;
    printf("\nThe number of inches is %.2f\n", in);
    return in;
}
float cm_to_feet(void)
{
    float cm = get_float("Number of Centimeters:");
    float feet = cm / 30.48;
    printf("\nThe number of inches is %.2f\n", feet);
    return in;
}
