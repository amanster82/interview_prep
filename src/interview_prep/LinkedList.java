package interview_prep;

public class LinkedList {
	private Node first;
	private int size;

public LinkedList(int s){
	first = null;
	size = s;
}


public void add (int d){
	Node n = new Node (d);
	Node curr;
	
	//Adding when empty
	if (first == null){
		first = n;
	}
	
	else if (first.getNext() == null){
		first.setNext(n);
		n.setPrev(first);
	}
	
	
	//Adding to next available node/end
	else{
		curr = first;
		while(curr.getNext() != null){
			curr = curr.getNext();
			curr.setNext(n);
			n.setPrev(curr);
		}
		
		size++;
	}
	
}


public String toString(){
	
	String info = "List: ";
	Node nodeInLine = null;
	
	while(first.getNext()!=null) {
		nodeInLine = first.getNext();
		info = nodeInLine.getData();
	}
	
	return info;
	
	
}


}
