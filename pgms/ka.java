import java.util.ArrayList;
import java.util.HashSet;
import java.util.Scanner;

final public class ka
{
    public static void main(String[] args)
    {
      int j,k1,k2;
	Scanner inj = new Scanner(System.in);       
        k1 = inj.nextInt();
        for(j=1;j<=k1;j++)
           kar();
          }

    public static void kar()
       {
        int l,o,f,g;
        String string, sub;
        ArrayList<String>al=new ArrayList<String>();
        HashSet hs = new HashSet();
        int i=0, c, length;

        Scanner in = new Scanner(System.in);
        System.out.print("Enter a string to print it's all unique substrings:->");
        string  = in.nextLine();
           l=in.nextInt();
        length = string.length();

       
        for(o=1;o<=l;o++)
	{
        al.clear();
       	i=0;
        f=in.nextInt()-1;
	g=in.nextInt()-1;
         for(c=f;c<(g);c++)
        {
            for(i=0;i<=(g)-c;i++)
            {
                sub = string.substring(c,c+i);
                al.add(sub);
            }
        }

        
        hs.clear();

        hs.addAll(al);
        al.clear();
        al.addAll(hs);

        for(String str:al)
        {
  System.out.println(str);
             i++;
        }
            
            if(i == 0)
              { System.out.println(1);}
            else 
            System.out.println(i-1);
 }
}

}
