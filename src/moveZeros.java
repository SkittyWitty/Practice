//Expedia
//Move all zeros to beginning input {1,2,3,0,0,0,4,5} output {0,0,0,1,2,3,4,5}

public class moveZeros {
	public static void main(String [] args){
		int[] t2 = {0,0,2,3,4,0};
		int [] t1 = {1,2,3,0,0,0,4,5};
		printArray(moving(t2));
	}
	
	
	public static int[] copy(int [] a){
		int []b = new int [a.length];
		for(int i = 0; i < a.length; i++){
			b[i] = a[i];
		}
		return b;
	}
	
	public static int[] moving(int [] a){
		int [] b = copy(a);
		int tpos = 0;
		int tnum;
		for(int i = 0; i < b.length; i++){
			if(b[i] == 0){
				tnum = b[tpos];
				//grab what is at the beginning
				b[i] = tnum;
				//make temp num = to where we are now in the array
				b[tpos] = 0;
				//lastly make that beginning position = to 0
				tpos++;
			}
			
		}
		
	
		return b;
	}
	
	public static void printArray(int [] a){
		for(int i = 0; i < a.length; i++){
			System.out.print(a[i]+ " ");
		}
	}
}
