function parents = Ruleta(expectation,nParents)
expectation = expectation(:,1);
wheel = cumsum(expectation);
parents = zeros(1,nParents);
for i = 1:nParents
    r=random('unif',0,1,1,1);
    for j = 1:length(wheel)
        if(r < wheel(j))
            parents(i) = j;
            break;
        end
    end
end