float cm_to_in(void)
{
    float cm = get_float("Number of centimeters:");
    float in = cm / 2.54;
    printf("\nThe number of inches is %.2f\n", in);
    return in;
}


float in_to_cm(void)
{
    float in = get_float("Number of inches:");
    float cm = in * 2.54;
    printf("\nThe number of centimeters is %.2f\n",cm);
    return cm;
}


int km_to_in(void)
{
    int km = get_int("Kilo: ")
    int in = Kilo * 39370;
    printf("Inches is %.2i\n", in);
    return in;
}


