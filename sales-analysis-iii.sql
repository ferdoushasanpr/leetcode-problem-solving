#https://leetcode.com/problems/sales-analysis-iii/

# Write your MySQL query statement below
select p.product_id, p.product_name from Product as p Inner Join Sales as s On p.product_id = s.product_id group by p.product_id, p.product_name having MIN(sale_date) >= "2019-01-01" and MAX(sale_date) <= "2019-03-31"