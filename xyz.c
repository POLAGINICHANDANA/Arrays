import java.util.Arrays;
public class Main
{
    public static void main(String[] args) {
    int[] arr={20,3,-1,9,8};
    Arrays.sort(arr);
    System.out.print("sorted array :");
    for (int i=0;i<arr.length;i++){
	     System.out.print(" "+arr[i]);}
	System.out.println("\ngreatest : "+arr[arr.length-1]);
	System.out.println("smallest :"+arr[0]);
	System.out.print("middle num in array :"+arr[arr.length/2]);
    }
	
}
