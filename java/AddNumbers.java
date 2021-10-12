import java.io.*;
import java.util.Scanner;

class AddNumbers
{
	public static void main(String[] args) throws IOException
	{
		File file=new File("numbers.txt");
		Scanner sc=new Scanner(file);

		int sum=0;
		while (sc.hasNextInt())
		{
			sum=sum+sc.nextInt();
		}
		System.out.println(sum);

	}
}
