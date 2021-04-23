#include "frontier_queue.hpp"

// TODO implement the member functions here

template <typename T>
State<T> frontier_queue<T>::pop() {

  //TODO
  State<T> obj(queue[0].getValue(), queue[0].getPathCost(), queue[0].getFCost() - queue[0].getPathCost());
  queue.erase(queue.begin());
  
  bool change = true;
  bool end = true;
  if(queue.size() == 0)
  {
	  return obj;
  }
  
  while(change)
  {
	  int i = 0;
	  change = false;
	  
	  while(end)
	  {
		  if((2*i + 1) == queue.size())
		  {
			  end = false;
		  }
		  else if((2*i + 2) == queue.size())
		  {
			  end = false;
			  if(queue[i].getFCost() > queue[2*i+1].getFCost())
			  {
				  change = true;
				  queue.push_back(queue[i]);
				  
				  queue[i] = queue[2*i+1];
				  queue[2*i+1] = queue.back();
				  queue.pop_back();
			  }
			  
		  }
		  else if((2*i + 3) == queue.size())
		  {
			  end = false;
			  if(queue[i].getFCost() > queue[2*i+1].getFCost())
			  {
				  change = true;
				  queue.push_back(queue[i]);
				  
				  queue[i] = queue[2*i+1];
				  queue[2*i+1] = queue.back();
				  queue.pop_back();
			  }
			  if(queue[i].getFCost() > queue[2*i+2].getFCost())
			  {
				  change = true;
				  queue.push_back(queue[i]);
				  
				  queue[i] = queue[2*i+2];
				  queue[2*i+2] = queue.back();
				  queue.pop_back();
			  }
		  }
		  else
		  {
			  if(queue[i].getFCost() > queue[2*i+1].getFCost())
			  {
				  change = true;
				  queue.push_back(queue[i]);
				  
				  queue[i] = queue[2*i+1];
				  queue[2*i+1] = queue.back();
				  queue.pop_back();
			  }
			  if(queue[i].getFCost() > queue[2*i+2].getFCost())
			  {
				  change = true;
				  queue.push_back(queue[i]);
				  
				  queue[i] = queue[2*i+2];
				  queue[2*i+2] = queue.back();
				  queue.pop_back();
			  }
		  }
		  i++;
	  }
  }
  
  return obj;
  //implement this the same way we implemented pop in the heap lecture. Compare using getFCost

  // needs return statement

}

template <typename T>
void frontier_queue<T>::push(const T &p, std::size_t cost, std::size_t heur) {

  State<T> obj(p, cost, heur);
  queue.push_back(obj);
	
  bool change = true;
  bool end = true;
  
  while(change)
  {
	  int i = 0;
	  change = false;
	  
	  while(end)
	  {
		  if((2*i + 1) == queue.size())
		  {
			  end = false;
		  }
		  else if((2*i + 2) == queue.size())
		  {
			  end = false;
			  if(queue[i].getFCost() > queue[2*i+1].getFCost())
			  {
				  change = true;
				  queue.push_back(queue[i]);
				  
				  queue[i] = queue[2*i+1];
				  queue[2*i+1] = queue.back();
				  queue.pop_back();
			  }
			  
		  }
		  else if((2*i + 3) == queue.size())
		  {
			  end = false;
			  if(queue[i].getFCost() > queue[2*i+1].getFCost())
			  {
				  change = true;
				  queue.push_back(queue[i]);
				  
				  queue[i] = queue[2*i+1];
				  queue[2*i+1] = queue.back();
				  queue.pop_back();
			  }
			  if(queue[i].getFCost() > queue[2*i+2].getFCost())
			  {
				  change = true;
				  queue.push_back(queue[i]);
				  
				  queue[i] = queue[2*i+2];
				  queue[2*i+2] = queue.back();
				  queue.pop_back();
			  }
		  }
		  else
		  {
			  if(queue[i].getFCost() > queue[2*i+1].getFCost())
			  {
				  change = true;
				  queue.push_back(queue[i]);
				  
				  queue[i] = queue[2*i+1];
				  queue[2*i+1] = queue.back();
				  queue.pop_back();
			  }
			  if(queue[i].getFCost() > queue[2*i+2].getFCost())
			  {
				  change = true;
				  queue.push_back(queue[i]);
				  
				  queue[i] = queue[2*i+2];
				  queue[2*i+2] = queue.back();
				  queue.pop_back();
			  }
		  }
		  i++;
	  }
  }
  //TODO
  
  //implement this the same way we implemented push in the heap lecture.

}

template <typename T>
bool frontier_queue<T>::empty() {

  if(queue.empty())
  {
	  return true;
  }
  return false;
}

template <typename T> 
bool frontier_queue<T>::contains(const T &p) {

  for(int i = 0; i < queue.size(); i++)
  {
	  if(p == queue[i].getValue())
	  {
		  return true;
	  }
  }
  return false;
}

template <typename T>
void frontier_queue<T>::replaceif(const T &p, std::size_t cost) {

 for(int i = 0; i < queue.size(); i++)
  {
	  if(cost < queue[i].getPathCost())
	  {
		  State<T> obj(p, cost, queue[i].getFCost()-queue[i].getPathCost());
		  queue[i] = obj;
		  return;
	  }
  }
}


