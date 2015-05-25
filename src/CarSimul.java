import java.util.Random;

// Raytheon
//
//Each turn of a simulation, car A has a 10% chance 
//of moving 5 feet forward, and a 90% chance of staying still.
//Similarly, each turn of the simulation car B has a 60% chance 
//of moving 1 feet forward, and a 40% chance of staying still.
//A race consists of however many turns in the simulation it 
//takes to travel 100ft. Write a simulation to run such a race, 
//and run it 100 times. Count how many times car A wins and how 
//many times car B wins. Do the results match up with what you would 
//expect from a mathematical analysis of the problem?


public class CarSimul {
	public static void main(String [] args){
		Random rand = new Random();
		System.out.println(rand.nextInt(4));
	}

	public static void runRace(int raceCount){
		int Awon = 0;
		int Bwon = 0;
		int A;
		int B;
		int rc = raceCount;
		while(rc != 0){
			//these integers represent how many feet the cars have gone
			//will reset when we begin this loop again
			A = 0;
			B = 0;
			//100ft win
			while(A != 100 || B != 100){
				if(carA()){
					A += 5;
				}
				if(carB()){
					B += 1;
				}
			}
			
			if(A == 100){
				Awon++;
			}
			else if(B == 100){
				Bwon++;
			}
					
			
			//number of races decreases
			rc--;
		}

		System.out.println("Car A won: "+Awon+" times.");
		System.out.println("Car B won: "+Bwon+" times.");
	}
	
//These two methods run the statistics on Car A and Car B
	public static boolean carA(){
		int comp = (int)Math.random() * 100;
		if(comp > 90){
			//moves 5 ft
			return true;
		}
		else{
			//stayed still
			return false;
		}
	}

	public static boolean carB(){
		int comp = (int)Math.random() * 100;
		if(comp > 60){
			//moves 1 ft
			return true;
		}
		else{
			//stayed still
			return false;
		}
	}
}
