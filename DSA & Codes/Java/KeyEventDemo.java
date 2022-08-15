import java.awt.*;
import java.awt.event.*;
class myFrame extends Frame implements KeyListener
{
	Label l1,l2,l3,l4;
	myFrame()
	{
		super("KEY_EVENT_DEMO");
		setLayout(null);
		l1=new Label("");
		l1.setBounds(30,70,100,100);
		add(l1);
		
		addKeyListener(this);
		addWindowListener(new WindowAdapter()
		{
		public void windowClosing(WindowEvent e)
		{
			System.exit(0);
		}
		});
	}
	public void keyPressed(KeyEvent k)
	{
		l1.setText(" Key pressed");
	}
	public void keyReleased(KeyEvent k)
	{
		l1.setText(" key released");
	}
	public void keyTyped(KeyEvent k)
	{
		l1.setText(" keyTyped");
	}

}
class KeyEventDemo
{

	public static void main(String[] args)
	{
	
		myFrame f=new myFrame();
		f.setSize(400,400);
		f.setVisible(true);
	}
}