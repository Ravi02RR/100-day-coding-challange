import java.io.*;
class demo{
    public static void main(String []args)throws IOException{
    BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    int c = 0;
    int n[] = new int[15];
    for(int i = 0; i < 10; i++)
    {
        n[i] = Integer.parseInt(in.readLine());
    }
    for(int i = 0; i<10; i++)
    {
        for(int j = 0; j<15; j++)  
        {
            if(n[j] == i)
            {
                c++;
            
            }
            System.out.println("Frequency of" +i+ "is: " +c);
            c = 0;
        }      
    }
    }
}