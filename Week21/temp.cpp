double calculateArea(int a, int b, int c) {
    double p = (a + b + c) / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int sort_by_area(Triangle* tf, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (calculateArea(tf[i].a, tf[i].b, tf[i].c) > calculateArea(tf[j].a, tf[j].b, tf[j].c)) {
                // Swap triangles
                Triangle temp = tf[i];
                tf[i] = tf[j];
                tf[j] = temp;
            }
        }
    }

    return 0;
}