#include <stdio.h>
#include <stdbool.h>

int main() {

    bool vomit = false;
    bool swell = true;
    bool fever = true;


    if(swell && vomit && fever){
        printf("%d %d %d you have vomit + swelling + fever your medicine is Unienzyme Tablet, Voveran SR Tablet,Aciloc 300 Tablet and Perinorm Tablet and peracitamol ",swell ,vomit,fever);
    }else if(vomit){
        printf("%d you have vomit and your medicine is Perinorm\n",vomit);
    }else if(swell){
        printf("%d you have swelling and your medicine is Voveran SR Tablet\n",swell);
    }else if(fever){
    	printf("%d you have fever and your medicine is: peracitamol\n",fever);
	}

    return 0;
}