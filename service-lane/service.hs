-- Enter your code here. Read input from STDIN. Print output to STDOUT
import Control.Monad

listInt :: [Char]->[Int]
listInt str = map read $ words str

main :: IO ()
main = do
    n <- map read $ getLine
    highway <- map read $ getLine
    let highwayLen = n!!0 in
    let testCases = n!!1 in

    lineList <- replicateM testCases getLine
