void mismatchDimension::error_Msg()const
{
	cout<<"Dimension of matrices do not match"<<endl;
}

template <class T>
void matrix<T>::get()
{
	int i,j;
	cin>>row>>col;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			cin>>ele[i][j];
	}
}

template <class T>
bool matrix<T>::check_Sparse()
{
	int i,j,count;
	count=0;
	for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
				if(ele[i][j]==0)
					count=count+1;
		}
		if(count>=(row*col)/2)
			return true;
		else
			return false;
} 

template <class T>
matrix<T> matrix<T>::add(matrix<T> & m)
{
  mismatchDimension d;
  int i,j,sum;
		matrix mf;
  if(row!=m.row || col!=m.col)
  	throw d;
  else
  {
		 mf.row=row;mf.col=col;
  	for(i=0;i<row;i++)
  		for(j=0;j<col;j++)
  			mf.ele[i][j]=ele[i][j]+m.ele[i][j];
  	return mf;	
  }
}

template<class T>
void matrix<T>::print()
{
  int i,j;
  for(i=0;i<row;i++)
    for(j=0;j<col;j++)
      cout<<ele[i][j]<<endl;
}