double areaSwitchCase(int ch, std::vector<double> a) {
    // Write your code here
    switch (ch) {
        case 1: 
            return 3.14159265358 * a[0] * a[0];
        case 2:
            return a[0] * a[1];
        default:
            return 0;
    }
}  
