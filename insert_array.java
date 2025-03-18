public class insert_array {
    public static void main (String [] args){
        String [] name = {"John","Mark","Ivan","Jona","Smith","Grace","Angella","Christine"};
        String [] insert = {"Maven"};
        int index = 4;
        String [] newName = new String[name.length + 1];

        for (int i = 0; i<index; i++){
            newName[i] = name[i];
        }
        
        newName[index] = insert[0];

        for(int i = index; i<name.length; i++){
            newName[i + 1] = name[i];

        }

        for(String n : newName){
            System.out.print(n + " ");
        }

    }
}
