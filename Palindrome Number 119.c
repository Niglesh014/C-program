bool isPalindrome(int x) {
  
    double rev = 0;
    double original = x;
    if(original < 0){
        original = original*-1;
    }
    while(x!= 0){
      rev = rev *10 +(x % 10);
      x = x/10;
    }
    if(original == rev){
        return true;
    }else{
        return false;
    }
}
