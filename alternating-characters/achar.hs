-- Enter your code here. Read input from STDIN. Print output to STDOUT
import Control.Monad

chew :: String -> Int -> Int
chew str acc = if str == [] || tail str == [] then acc 
                else let (a,b) = (head str, head $ tail str) in
                    if a == b then chew (tail str) (acc + 1)
                        else chew (tail str) acc
                                

main :: IO ()
main = do
    n <- getLine
    lineList <- replicateM n getLine
    let
        ans = map (\s -> chew s 0) lineList
    mapM_ print ans