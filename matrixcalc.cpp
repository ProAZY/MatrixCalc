#include<iostream>



int menu(){
    const std::string header = "Please Enter your choice";
    std::string middle = "* " + header+ " *";
    std::string first(middle.length(), '*');
    std::cout << "\n";
    std::cout << first << "\n";
    std::cout << middle << "\n";
    std::cout << first << "\n";
    std::cout << "1. Matrix Addition\n";
    std::cout << "2. Matrix Determinant\n";
    std::cout << "3. Matrix Inverse\n";
    std::cout << "4. Exit\n";
    int optn;
    std::cout << "\n";
    std::cin >> optn;
    return (optn);
   
}


int premenu(){
    int v = 0;
    while(v==0){
        int optn = menu();
        if(optn > 0 && optn < 4){
            std::cout << "\nLaunching...";
            int v = 1;
            return (optn);
            break;
        }
        else if (optn == 4){
            return (optn);
            break;
        }
        else{
            std::cout << "\nPlease enter a valid input.\n";
        }
    }
}



int matadd(){
    int a [2][2];
    //Determines the first matrix
    std::cout << "\nPlease enter the first matrix:\n";
    std::cout << "a:";
    std::cin >> a[0][0];
    std::cout << "b:";
    std::cin >> a[1][0];
    std::cout << "c:";
    std::cin >> a[0][1];
    std::cout << "d:";
    std::cin >> a[1][1];

    int b [2][2];
    //Determines the second matrix
    std::cout << "\nPlease enter the second matrix:\n";
    std::cout << "a:";
    std::cin >> b[0][0];
    std::cout << "b:";
    std::cin >> b[1][0];
    std::cout << "c:";
    std::cin >> b[0][1];
    std::cout << "d:";
    std::cin >> b[1][1];

    int c [2][2] = {{0,0}, {0,0}};
    //Adds the matrices together
    c[0][0] = a[0][0] + b[0][0];
    c[1][0] = a[1][0] + b[1][0];
    c[0][1] = a[0][1] + b[0][1];
    c[1][1] = a[1][1] + b[1][1];

    std::cout << "\nResult:\n" << c[0][0] << ' ' << c[1][0] << '\n' << c[0][1] << ' ' << c[1][1] << '\n';
}

int matdet(){
    int a [2][2];
    //Determines the matrix
    std::cout << "\nPlease enter the matrix:\n";
    std::cout << "a:";
    std::cin >> a[0][0];
    std::cout << "b:";
    std::cin >> a[1][0];
    std::cout << "c:";
    std::cin >> a[0][1];
    std::cout << "d:";
    std::cin >> a[1][1];

    int det;
    //Calculates the Determinant
    det = ((a[0][0]*a[1][1]) - (a[1][0]*a[0][1]));
    return (det);
}

int matinv(){
    int a [2][2];
    //Determines the matrix
    std::cout << "\nPlease enter the matrix:\n";
    std::cout << "a:";
    std::cin >> a[0][0];
    std::cout << "b:";
    std::cin >> a[1][0];
    std::cout << "c:";
    std::cin >> a[0][1];
    std::cout << "d:";
    std::cin >> a[1][1];

    double det;
    //Calculates the Determinant
    det = ((a[0][0]*a[1][1]) - (a[1][0]*a[0][1]));

    double inv[2][2];
    //Calculates the Inverse
    double deter = 1/det;
    inv[0][0] = a[1][1] * deter;
    inv[1][0] = -a[1][0] * deter;
    inv[0][1] = -a[0][1] * deter;
    inv[1][1] = a[0][0] * deter;
    
    std::cout << "\n" << inv[0][0] << ' ' <<  inv[0][1] << "\n" <<  inv[1][0] << ' ' <<  inv[1][1] << "\n";
    
    
}   



int main(){
    int i = 0;
    while (i == 0){
    int optn = premenu();
    int result = 0;
    switch(optn){
        case 1:
            result = matadd();
            break;
        case 2:
            result = matdet();
            std::cout << "\nThe determinant of this matrix is: " << result << "\n";
            break;
        case 3:
            result = matinv();
            break;
        case 4:
            i = 1;
            break;
        default:
            std::cout << ' ';
            break;
    }
    }
    
}