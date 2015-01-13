-- Enter your code here. Read input from STDIN. Print output to STDOUT
import Control.Monad
import Data.List

fair :: [Int] -> Int -> Int
fair lst k = let m = maximum lst in
    let fair_helper lstH kH mH = if length (take kH lstH) < k then mH 
                        else fair_helper (tail lstH) kH 
                            (minimum [mH,maximum (take kH lstH) - minimum (take kH lstH)])
     in fair_helper lst k m


main :: IO ()
main = do
    n <- readLn :: IO Int
    k <- readLn :: IO Int
    lineList <- replicateM n getLine
    let
        ans = fair (sort $ map read lineList) k
    print ans