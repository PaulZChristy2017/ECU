template <class TYPE>
void Queue<TYPE>::EnQueue(const TYPE x) 
{ 
    TYPE* t = new TYPE[max_len*2];
    if ( head != isFull() )
    {
        number++;
        head--;
        s[++head % max_len] = x;
        if ( head = isFull() )
        {
            for( int i = 0; i < max_len; ++i )
            {
                t[i] = s[i];
            }

            
            //  The queue was full.
            //  Reallocated xxx queue elements and copied queue to reallocated space.
            cout << "The queue was full." << endl;
            cout << "Reallocated " << max_len << " queue elements and "
                    "copied queue to reallocated space." << endl;
            
            number++;
            head--;
            s[++head % max_len];
        }
    } 
}

template <class TYPE>
    TYPE Queue<TYPE>::DeQueue() 
    {
        if ( head != isEmpty() )
        {
            tail++;
            return s[--tail % max_len]; 
        }
        else
        {
            cout << "The queue is empty." << endl;
            return 1;
        }
               
    }
