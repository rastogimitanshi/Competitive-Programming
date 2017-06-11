/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class countandsay
{
	public static void main (String[] args) throws java.lang.Exception
	{
	int N;
    Scanner scan= new Scanner(System.in);
    N=scan.nextInt();
    int i=1;
    int j;
    String result="1";
    while(i<N){
      StringBuilder sb= new StringBuilder();
      int count=1;
      for(j=1;j<result.length();j++)
      {
        if(result.charAt(j-1)==result.charAt(j))
        {
          count++;
        }
        else{
          sb.append(count);
          sb.append(result.charAt(j-1));
          count=1;
          }
        
      }
      sb.append(count);
      sb.append(result.charAt(result.length()-1));
      result=sb.toString();
    i++;
  }
  System.out.println(result);
	}
}