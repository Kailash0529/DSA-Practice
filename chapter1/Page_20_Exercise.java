// Rearranged Code to Match the Desired Output
public class Page_20_Exercise {
    public static void main(String[] var0) {
       int var1 = 3;
 
       while(var1 > 0) {
          if (var1 > 2) {
             System.out.print("a");
          }
 
          --var1;
          System.out.print("-");
          if (var1 == 2) {
             System.out.print("b c");
          }
 
          if (var1 == 1) {
             System.out.print("d");
             --var1;
          }
       }
 
    }
 }