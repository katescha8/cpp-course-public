#pragma once

int* LowerBound(int* first, int* last, int value) {
	int* it = first;
	int count = std::distance(first, last);
	int step = count;

	while (count > 0)
    {
        it = first; 
        step = count / 2; 
        std::advance(it, step);
 
        if (*it < value)
        {
            first = ++it; 
            count -= step + 1; 
        }
        else
            count = step;
    }
 
    return first;
}