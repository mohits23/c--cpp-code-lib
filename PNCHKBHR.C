void check_ball_horiz_radius(int x,int y)
{
   int i,temp;
     temp=bx[bcount]-3;
    for(i=0; i<7; i++)
    {
       if( y==by[bcount] && x==(temp+i) )
       {
	  clrscr();
	  setcolor(2);
	   rectangle(190,60,460,260);
	    bcount++; // bcount increment
	    size=size+20; // size increment
	   ball();
	    //break;
       }
    }
     //printf("\n\tbcount=%d", bcount );
     //printf("\n\tsize=%d", size );
}
