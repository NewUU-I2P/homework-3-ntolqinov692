#include <string>

std::string problemSolution3(float height, char S) {
    // write your code here
    std::string height1;
    if(S == 'M'){
        if(height < 1.70)
            height1 = "Short";
        if(height >= 1.70 && height < 1.85)
            height1 = "Normal";
        if(height >= 1.85)
            height1 = "Tall";
    }
    if(S == 'F'){
        if(height < 1.60)
            height1 = "Short";
        if(height >= 1.60 && height < 1.75)
            height1 = "Normal";
        if(height >= 1.75)
            height1 = "Tall";
    }


    // use return to return your result
    // make use of control flow statements
    return height1;
}