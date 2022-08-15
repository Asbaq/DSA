import java.awt.*;
import java.awt.event.*;
import java.applet.*;
public class app2 extends Applet implements ActionListener
{
	TextField t1=new TextField(10);	
	TextField t2=new TextField(20);
	TextField t3=new TextField();
	
	Label l1=new Label("First number");
	Label l2=new Label("Second Number");
	Label l3=new Label("Sum of two numbers are");
	
	Button b=new Button("Sum");
	String str =" ";

	public void init()
	{
	str=str +"init";
	add(l1);
	add(t1);
	add(l2);
	add(t2);
	add(l3);
	add(t3);
	add(b);

	//t1.foreGround(Color.red);
	b.addActionListener(this);
	}

	public void actionPerformed(ActionEvent ae)
	{
		if(ae.getSource()==b)
		{
			int n1=Integer.parseInt(t1.getText());
			int n2=Integer.parseInt(t2.getText());
			t3.setText("n1+n2");
		}
	}
	public void start()
	{
		str=str+"start";
	}
	public void stop()
	{
		str=str+"stop";
	}
	public void destroy()
	{
		str=str+"destroy";
	}
	public void paint(Graphics g)
	{
		g.drawString(str,10,100);
	}
}
