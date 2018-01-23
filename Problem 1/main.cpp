//Multiples of 3 and 5

#include <iostream>

using namespace std;

int total=0;

int check (int x){
    if(x%3==0||x%5==0)
        return 1;
    else
        return 0;
}

void sum (int x){
    total +=x;
}

int main(){
    cout << "Enter the limit(integer)> ";
    int limit=1000, c=1;
    cin>> limit;

    for( ;c<limit; c++){
        if(check(c)==1)
            sum(c);
        else
            continue;
    }

    cout<<"The total sum of the multiples of 3 and 5 to "<<limit<<" is -> "<<total<"\n\n\n\n";

    return 0;
}
