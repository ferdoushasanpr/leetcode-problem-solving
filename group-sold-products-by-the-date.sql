#https://leetcode.com/problems/group-sold-products-by-the-date/

# Write your MySQL query statement below
select sell_date, count(distinct product) as num_sold, Group_Concat(distinct product Order by product Separator ',') as products from Activities Group by sell_date