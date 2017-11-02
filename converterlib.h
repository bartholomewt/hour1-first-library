//cm to in
float cm_to_in(void)
{
    float cm = get_float("Number of centimeters:");
    float in = cm / 2.54;
    printf("\nThe number of inches is %.2f\n", in);
    return in;
}

//in to cm
float in_to_cm(void)
{
    float in = get_float("Number of inches:");
    float cm = in * 2.54;
    printf("\nThe number of centimeters is %.2f\n",cm);
    return cm;
}

//ft to cm
float ft_to_cm(void)
{
    float ft = get_float("Number of feet: ");
    float cm = ft * 30.48;
    printf("\nThe number of centimeters is %.2f\n", cm);
    return cm;
}

//km to ft
float km_to_ft (void)
{
    float km = get_float("Number of Kilometers: ")
    float ft = km * 3280.8;
    printf("\nThe number of inches is %.3f\n", ft);
    return ft;
}

//m to ft
float m_to_ft(void)
{
    float meters = get_float("Meters: ");
    float feet = meters*3.28084;
    printf("\nFeet:%f\n", feet);
    return in;

}

//cm to mi
float cm_to_mi(void)
{
    float cm = get_float("Number of centimeters:");
    float mi = cm / 160934.4;
    printf("\nThe number of miles is %.2f\n", mi);
    return mi;
}


float inches_to_meaters(void)
{
    float inches = get_float("number of inches: \n");
    float meaters = inches * 0.0254;
    printf("\n The number of meaters is %.2f\n", inches);
    return inches;
}

