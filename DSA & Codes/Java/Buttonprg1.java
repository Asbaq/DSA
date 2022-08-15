import java.awt.*;
import java.awt.event.*;
class Buttonprg1 extends Frame
{
	public static void main(String args[])
	{
		Buttonprg1 bp=new Buttonprg1();
		bp.setLayout(new FlowLayout());
		Button b=new Button("submit");
		Label l=new Label("name");
		TextField tf=new TextField(25);
		bp.add(b);
		bp.add(l);		
		bp.add(tf);
		bp.setTitle("Button Program");
		bp.setSize(400,400);
		bp.setVisible(true);
	}
}
		