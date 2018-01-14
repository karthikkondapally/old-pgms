
import java.util.Set;
import java.util.*;
import java.util.Scanner;
 
class Solution
{
   public static void main(String args[])
   {
      String string, sub;
      int i, c, length,k=0;
     Set<String> s = new HashSet<String>();
      Scanner in = new Scanner(System.in);
     // System.out.println("Enter a string to print it's all substrings");
      string  = in.nextLine();
 
      length = string.length();   
 
    //  System.out.println("Substrings of \""+string+"\" are :-");
 
      for( c = 0 ; c < length ; c++ )
      {
         for( i = 1 ; i <= length - c ; i++ )
         {
            sub = string.substring(c, c+i);
            System.out.println(sub);
            k++;
           s.add(sub);
         }
      }
      
            System.out.println(s.size());
    }
}
