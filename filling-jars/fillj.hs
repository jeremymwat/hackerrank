-- Enter your code here. Read input from STDIN. Print output to STDOUT
import Control.Monad

chew lineList n = let av = foldl (\_ (a:b:c:[]) -> (+) (b-a+1) * c) 0 (map (map read . words) lineList)
                    in av/n


main :: IO ()
main = do
    n <- map read $ getLine
    lineList <- replicateM n!!1 getLine
    let
        ans = chew lineList n!!0
    print ans