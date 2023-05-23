int n, m, row, column;





int dijkstra(int start, int end)
{
	

	/* find the minimum weight edge which lies with node i */
	for(int i = 1; i <= n; i++)
	{
		minWeight[i] = INT_MAX;
		for(int j = 0; j < adj[i].size(); j++)
			minWeight[i] = min(minWeight[i], 2*adj[i][j].cost);
	}
	
	while(!q.empty())
	{
		node = q.top();
		q.pop();
		
		if(visited[node.n]) 
		{
			if(weight[node.n] < node.cost && (weight2[node.n] == -1 || weight2[node.n] >= node.cost))
					weight2[node.n] = node.cost;
			else
				continue;
		}
		else visited[node.n] = true;
		
		for(int i = 0; i < adj[node.n].size(); i++)
		{
			temp = adj[node.n][i];
			if(weight[temp.n] == -1 || weight[temp.n] > node.cost + temp.cost)
			{
		 		q.push(Node(temp.n, node.cost + temp.cost));
				weight2[temp.n] = weight[temp.n];
		 		weight[temp.n] = node.cost + temp.cost;
			}
			else if(weight2[temp.n] == -1 || weight2[temp.n] > node.cost + temp.cost)
			{
				if(weight[temp.n] != node.cost + temp.cost)
					q.push(Node(temp.n, node.cost + temp.cost));
				//printf("--------------\n");
			}
		}

		/* If we haven't check the option 1 yet (go back along with the minimum edge and return)
			then do it now */
		if(!back[node.n])
		{
			q.push(Node(node.n, weight[node.n] + minWeight[node.n]));
			back[node.n] = true;
		}
	}
	
	return weight2[end];
}

int main()
{	
	//freopen("input.txt", "r", stdin);
	
	int i, j, k, l;
	int x, y;
	int tc, t;
	
	scanf("%d", &tc);

	for(t = 1; t <= tc; t++)
	{
		scanf("%d %d", &n, &m);
		
			
		

		printf("Case %d: %d\n", t, result);
	}
			
	return 0;
}