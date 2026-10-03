bool isPalindrome(int x) {
     int orgi = x;
     long long rev = 0;;
     while(x>0){
        int dig = x%10;
         rev = rev*10 + dig;
        x = x/10;
     }
     if(rev == orgi){
        return true;
     }
     else{
        return false;
     }
}