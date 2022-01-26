// brute force tho chesa bro time limit exceed
int maxProfit(vector<int>& prices) {
      	int Max = 0 , temp = 0;
	  	for(int i = 0 ; i < prices.size() ; i++) {
	  		for(int j = i+1 ; j < prices.size() ; j++) {

	  			if(prices[i]<prices[j])
                {
                    Max = prices[j] - prices[i];
	  				if(temp > Max)
                    {
                        Max = temp;

                    }
                    temp = Max;

                }


	  		}
	  	}
	  	return Max;
    }
