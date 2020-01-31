import java.util.Scanner;
class Array {
	

    public native int[] generate(int num);
    public native int diff(int[] o, int size );
	public static void cls()
{
	try
	{	
		new ProcessBuilder("cmd","/c","cls").inheritIO().start().waitFor();
	}catch(Exception E)
		{
			System.out.println(E);
		}
}
    public static void main(String[] args) {
		cls();
        int array [];
        int max = 0;
        int min = 0;
		int diff=0;
        Scanner ab = new Scanner(System.in);
        System.out.printf("Enter a number: ");
        int num = ab.nextInt();
		System.out.printf("Number generated: \n");
        Array p = new Array();
        array = p.generate(num);
		
		for(int i = 0; i < array.length;i++)
		{
			if(array[i] > max)
			{
				max = array[i];
			}

		}
            System.out.println("\n"+"Max : " + max);


		for(int i = 0; i < array.length;i++)
		{
            for (int j = i + 1; j < array.length; j++)  
			{
				
				if(array[i] < array[j])
				{
					min = array[i];
                    array[i] = array[j];  
                    array[j] = min;
				}
			}
		}
		min=array[array.length-1];
            System.out.println("Min : " + min);
  	Array d = new Array();
	diff = d.diff(array,num);
	System.out.println("The difference of max and min : " + diff);
     }
    static 
	{
		System.loadLibrary("Generate");
    }
}
