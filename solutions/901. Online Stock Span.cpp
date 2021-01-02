class StockSpanner {
   stack<pair<int, int>> stock; 
public:
   int next(int price) {
      int days = 1;
      while (stock.size() && price >= stock.top().first)
      {
         days += stock.top().second;
         stock.pop();
      }
      stock.push({price, days});
      return days;
   }
};
