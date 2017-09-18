package interview_prep;

public class Node {

	private int data;
	private Node next, prev;

	public Node(int d) {
		data = d;
		next = null;
		prev = null;

	}

	public Node getNext(){
		return next;
	}
	
	public void setNext(Node n){
		next = n;
	}
	
	public Node getPrev(){
		return prev;
	}
	
	public void setPrev(Node p){
		prev = p;
	}
	
	public int getData(){
		return data;
	}
	
	public void setData(int d){
		data = d;
	}
	
}
