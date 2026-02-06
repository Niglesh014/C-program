int numberOfCuts(int n) {
    if(n % 2 == 0){
        n = n/ 2;
        return n;
    }else if (n== 1){
        return 0;
    }else{
        return n;
    }

    
}
