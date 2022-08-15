import java.awt.*;
import java.awt.event.*;
class myFrame extends Frame implements MouseListener,MouseMotionListener
{
	Label l1,l2,l3;
	myFrame()
	{
		super("MOUSE_EVENT_DEMO");
		setLayout(null);
		l1=new Label("");	
		l2=new Label("");
		l3=new Label("");
		l1.setBounds(50,70,200,200);
		l2.setBounds(50,100,200,200);
		l3.setBounds(50,130,200,200);
		add(l1);
		add(l2);
		add(l3);
		
		addMouseListener(this);
		addMouseMotionListener(this);
		addWindowListener(new WindowAdapter()
		{
		public void windowClosing(WindowEvent e)
		{
			System.exit(0);
		}
		});
	}
	public void mouseClicked(MouseEvent k)
	{
		l1.setText(" Mouse is clicked");
	}
	public void mouseReleased(MouseEvent k)
	{
		l1.setText(" Mouse is released");
	}

	public void mousePressed(MouseEvent k)
	{
		l1.setText(" Mouse is pressed");
	}

	public void mouseEntered(MouseEvent k)
	{
		l1.setText(" Mouse is entered");
	}
	public void mouseExited(MouseEvent k)
	{
		l1.setText(" Mouse is Exited");
	}
	public void mouseDragged(MouseEvent k)
	{
		l1.setText(" Mouse is being dragged");
	}
	public void mouseMoved(MouseEvent k)
	{
		l1.setText(" Mouse is being moved");
		l2.setText(k.getX()+","+k.getY());
	}

}
class MouseEventDemo
{

	public static void main(String[] args)
	{
	
		myFrame f=new myFrame();
		f.setSize(400,400);
		f.setVisible(true);
	}
}