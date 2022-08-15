import java.awt.*;
import java.awt.event.*;
class myFrame1 extends Frame
{
	myFrame1(String str)
	{
 	 	super(str);
	}
public static void main(String args[])
{
	myFrame1 mf=new myFrame1("my first frame");
	//mf.setTitle("nigga");
	mf.setVisible(true);
	mf.setSize(400,400);
	mf.addWindowListener(new WindowAdapter()
	{
		public void windowClosing(WindowEvent e)
		{
			System.exit(0);
		}
	});
}
}