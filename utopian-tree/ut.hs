-- Enter your code here. Read input from STDIN. Print output to STDOUT
import Control.Monad

-- cycle function list, fold over it with starting value

chew :: Int -> Int
chew numb = foldl (\ x f -> f x ) 1 (take numb $ cycle [(*) 2, (+) 1])

main :: IO ()
main = do
  n <- readLn :: IO Int
  lineList <- replicateM n getLine
  let
    ans = map (chew . read ) lineList
  mapM_ print ans