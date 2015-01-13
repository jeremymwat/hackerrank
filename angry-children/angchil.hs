-- Enter your code here. Read input from STDIN. Print output to STDOUT
import Control.Monad
import Data.List

fair :: [Int] -> Int -> Int
fair lst k = let m = lst!!(length lst) in
    let fair_helper lstH kH mH = let newL = take kH lstH in
                        if length newL < k then mH 
                        else let (minH, maxH) = (head newL, last newL) in 
                        fair_helper (tail lstH) kH (minimum [mH,maxH-minH])
     in fair_helper lst k m


main :: IO ()
main = do
    n <- readLn :: IO Int
    k <- readLn :: IO Int
    lineList <- replicateM n getLine
    let
        ans = fair (sort $ map read lineList) k
    print ans