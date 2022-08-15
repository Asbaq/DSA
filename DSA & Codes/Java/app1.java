import java.awt.*;
import java.applet.*;
public class app1 extends Applet
{
	String str=" ";
	public void init()
	{
		setBackground(Color.yellow);
		setForeground(Color.red);
		Font f=new Font("Arial",Font.BOLD,28);
		setFont(f);	
		str=str+"init";
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
	