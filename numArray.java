import java.util.Scanner;
class numArray {
    public native int[] print(int num);
    public native int[] diff(int [] o, int size );
    public static void main(String[] args) {
        int array [];
        int max = 0;
        int min = 0;
        Scanner ab = new Scanner(System.in);
        System.out.printf("Enter a number: ");
        int num = ab.nextInt();
		System.out.printf("Generated random number is: ");
        numArray p = new numArray();
        array = p.print(num);
		for (int i:array)
             System.out.printf(i + " ");

		        for(int i = 1; i < array.length;i++)
		{
			if(array[i] > max)
			{
				max = array[i];
			}

		}
                      System.out.println("\n"+"Max : " + max);


		        for(int i = 0; i < array.length;i++)
		{
                      for (int j = i + 1; j < array.length; j++)  {
			if(array[i] < array[j])
			{
				min = array[i];
                                array[i] = array[j];  
                                array[j] = min;
}
			}
		}
               System.out.println("Min : " + min);
  	numArray d = new numArray();
	d.diff(array,num);
	System.out.println("The difference of max and min : " + array[0]);
     }
    static {
        System.loadLibrary("CnumArray");
    }
}
